# Created by: mm@FreeBSD.org
# $FreeBSD: head/graphics/ImageMagick-nox11/Makefile 441760 2017-05-26 08:19:37Z kwm $

# the SVG and PANGO plugins need X11
OPTIONS_EXCLUDE=	X11 SVG PANGO
PORTSCOUT=	ignore:1
# workaround until bsd.port.mk code can grok the disabling of the X11 option
WITHOUT_X11=yes

MASTERDIR=	${.CURDIR}/../ImageMagick

.include        "${MASTERDIR}/Makefile"
