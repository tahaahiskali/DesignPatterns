## Builder
####  Intent

Separate the construction of a complex object from its representation so that
the same construction process can create different representations.

#### Motivation

A reader for the RTF (Rich Text Format) document exchange format should be able
to convert RTF to many text formats. The reader might convert RTF documents into
plain ASCII text or into a text widget that can be edited interactively. The problem,
however, is that the number of possible conversions is open-ended. So it should
be easy to add a new conversion without modifying the reader.
A solution is to configure the RTFReader class with a TextConverter object that
converts RTF to another textual representation. As the RTFReader parses the RTF
document, it uses the TextConverter to perform the conversion. Whenever the
RTFReader recognizes an RTF token (either plain text or an RTF control word),
it issues a request to the TextConverter to convert the token. TextConverter
objects are responsible both for performing the data conversion and for
representing the token in a particular format.
Subclasses of TextConverter specialize in different conversions and formats. For
example, an ASCIIConverter ignores requests to convert anything except plain text.
A TeXConverter, on the other hand, will implement operations for all requests
in order to produce a TeX representation that captures all the stylistic
information in the text. A TextWidgetConverter will produce a complex user
interface object that lets the user see and edit the text.

#### Applicability

Use the Builder pattern when
* the algorithm for creating a complex object should be independent of the
parts that make up the object and how they're assembled.
* the construction process must allow different representations for the
object that's constructed.
