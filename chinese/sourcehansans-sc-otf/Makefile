# $FreeBSD$

PORTNAME=		sourcehansans
PORTVERSION=		2.000
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

OPTIONS_DEFINE=		HW
OPTIONS_SINGLE=		TYPE
OPTIONS_SINGLE_TYPE=	FULL SUBSET
SUBSET_PREVENTS=	HW
OPTIONS_DEFAULT=	FULL
OPTIONS_SUB=		yes
HW_DESC=		Install the half-width font in addition to the full font
FULL_DESC=		Install the full font (can display all CJK)
SUBSET_DESC=		Install the subset font (can display SC only)
SUBSET_PREVENTS_MSG=	Half-width can only be installed in addition to the full font

.include <bsd.port.options.mk>

FONTNAME=		SourceHanSans${"${PORT_OPTIONS:MSUBSET}" != "":?CN:SC}
FONTTYPE=		otf
FONTFORMAT=		OpenType

SUB_FILES=		pkg-message

USE_GITHUB=		yes
GH_ACCOUNT=		adobe-fonts
GH_PROJECT=		source-han-sans

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/${"${PORT_OPTIONS:MSUBSET}" != "":?SubsetOTF/CN:OTF/SimplifiedChinese}/*.otf ${STAGEDIR}${FONTSDIR}
.if ${PORT_OPTIONS:MHW}
	${INSTALL_DATA} ${WRKSRC}/OTF/SimplifiedChineseHW/*.otf ${STAGEDIR}${FONTSDIR}
.endif

.include <bsd.port.mk>
