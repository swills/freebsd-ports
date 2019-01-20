# $FreeBSD$

PORTNAME=		sourcehanserif
PORTVERSION=		1.001
DISTVERSIONSUFFIX=	R
CATEGORIES=		korean x11-fonts
PKGNAMESUFFIX=		-otf
# Note: the following PKGNAMEPREFIX is here only for self-documenting purpose;
#       actual prefixing is done by the `korean' category itself.
#PKGNAMEPREFIX=		ko-

MAINTAINER=		hyun@caffeinated.codes
COMMENT=		Korean font by Adobe designed for user interfaces

LICENSE=		OFL11
LICENSE_FILE=		${WRKSRC}/LICENSE.txt

USES=			fonts

NO_ARCH=		yes
NO_BUILD=		yes

OPTIONS_SINGLE=		TYPE
OPTIONS_SINGLE_TYPE=	FULL SUBSET
FULL_DESC=		Install the full font (can display all CJK)
SUBSET_DESC=		Install the subset font (can display Korean only)
OPTIONS_DEFAULT=	FULL
OPTIONS_SUB=		yes

.include <bsd.port.options.mk>

FONTNAME=		SourceHanSerifK${"${PORT_OPTIONS:MSUBSET}" != "":?R:}
FONTTYPE=		otf
FONTFORMAT=		OpenType

SUB_FILES=		pkg-message

USE_GITHUB=		yes
GH_ACCOUNT=		adobe-fonts
GH_PROJECT=		source-han-serif

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/${"${PORT_OPTIONS:MSUBSET}" != "":?SubsetOTF/KR:OTF/Korean}/*.otf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
