# $FreeBSD$

PORTNAME=		sourcehanserif
PORTVERSION=		1.001
DISTVERSIONSUFFIX=	R
CATEGORIES=		chinese x11-fonts
PKGNAMESUFFIX=		-sc-otf
# Note: the following PKGNAMEPREFIX is here only for self-documenting purpose;
#       actual prefixing is done by the `chinese' category itself.
#PKGNAMEPREFIX=		zh-

MAINTAINER=		hyun@caffeinated.codes
COMMENT=		Simplified Chinese font by Adobe designed for user interfaces

LICENSE=		OFL11
LICENSE_FILE=		${WRKSRC}/LICENSE.txt

USES=			fonts

NO_ARCH=		yes
NO_BUILD=		yes

OPTIONS_SINGLE=		TYPE
OPTIONS_SINGLE_TYPE=	FULL SUBSET
FULL_DESC=		Install the full font (can display all CJK)
SUBSET_DESC=		Install the subset font (can display SC only)
OPTIONS_DEFAULT=	FULL
OPTIONS_SUB=		yes

.include <bsd.port.options.mk>

FONTNAME=		SourceHanSerif${"${PORT_OPTIONS:MSUBSET}" != "":?CN:SC}
FONTTYPE=		otf
FONTFORMAT=		OpenType

SUB_FILES=		pkg-message

USE_GITHUB=		yes
GH_ACCOUNT=		adobe-fonts
GH_PROJECT=		source-han-serif

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/${"${PORT_OPTIONS:MSUBSET}" != "":?SubsetOTF/CN:OTF/SimplifiedChinese}/*.otf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
