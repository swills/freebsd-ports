# $FreeBSD$

PORTNAME=		sourcehanserif
PORTVERSION=		1.001
DISTVERSIONSUFFIX=	R
CATEGORIES=		japanese x11-fonts
PKGNAMESUFFIX=		-otf
# Note: the following PKGNAMEPREFIX is here only for self-documenting purpose;
#       actual prefixing is done by the `japanese' category itself.
#PKGNAMEPREFIX=		ja-

MAINTAINER=		hyun@caffeinated.codes
COMMENT=		Japanese font by Adobe designed for user interfaces

LICENSE=		OFL11
LICENSE_FILE=		${WRKSRC}/LICENSE.txt

USES=			fonts

NO_ARCH=		yes
NO_BUILD=		yes

OPTIONS_SINGLE=		TYPE
OPTIONS_SINGLE_TYPE=	FULL SUBSET
FULL_DESC=		Install the full font (can display all CJK)
SUBSET_DESC=		Install the subset font (can display Japanese only)
OPTIONS_DEFAULT=	FULL
OPTIONS_SUB=		yes

.include <bsd.port.options.mk>

FONTNAME=		SourceHanSerif${"${PORT_OPTIONS:MSUBSET}" != "":?JP:}
FONTTYPE=		otf
FONTFORMAT=		OpenType

SUB_FILES=		pkg-message

USE_GITHUB=		yes
GH_ACCOUNT=		adobe-fonts
GH_PROJECT=		source-han-serif

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/${"${PORT_OPTIONS:MSUBSET}" != "":?SubsetOTF/JP:OTF/Japanese}/*.otf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
