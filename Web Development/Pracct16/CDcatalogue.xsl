<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="/">
    <html>
      <body>
        <h1 align="center">CD CATALOGUE</h1>
        <table border="1" cellspacing="0" align="center">
          <tr>
            <th>Title</th>
            <th>Artist</th>
            <th>Year</th>
            <th>Genre</th>
          </tr>
          <xsl:for-each select="CATALOG/CD">
            <tr>
              <td>
                <xsl:value-of select="TITLE" />
              </td>
              <td>
                <xsl:value-of select="ARTIST" />
              </td>
              <td>
                <xsl:value-of select="YEAR" />
              </td>
              <td>
                <xsl:value-of select="GENRE" />
              </td>
            </tr>
          </xsl:for-each>
        </table>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>