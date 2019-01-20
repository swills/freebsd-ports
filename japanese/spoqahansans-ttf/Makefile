# $FreeBSD$

PORTNAME=		spoqahansans
DISTVERSIONPREFIX=	v
DISTVERSION=		2.1.2
CATEGORIES=		japanese x11-fonts
MASTER_SITES=		https://github.com/spoqa/spoqa-han-sans/releases/download/${DISTVERSIONPREFIX}${DISTVERSION}/
# Note: the following PKGNAMEPREFIX is here only for self-documenting purpose;
#       actual prefixing is done by the `japanese' category itself.
#PKGNAMEPREFIX=		ja-
PKGNAMESUFFIX=		-ttf
DISTNAME=		SpoqaHanSans_all

MAINTAINER=		hyun@caffeinated.codes
COMMENT=		Japanese custom font based on Noto Sans and Lato

LICENSE=		OFL11
LICENSE_FILE=		${WRKSRC}/LICENSE

USES=			fonts zip

NO_ARCH=		yes
NO_BUILD=		yes

OPTIONS_SINGLE=		TYPE
OPTIONS_SINGLE_TYPE=	ORIGINAL SUBSET
ORIGINAL_DESC=		Install original font (supports Korean and Japanese)
SUBSET_DESC=		Install subset font (supports 6,355 Japanese glyphs)
OPTIONS_DEFAULT=	ORIGINAL

FONTNAME=		SpoqaHanSans
FONTTYPE=		ttf
FONTFORMAT=		TrueType

SUB_FILES=		pkg-message

#.include <bsd.port.options.mk>

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/SpoqaHanSans_jp_${"${PORT_OPTIONS:MSUBSET}" != "":?subset:original}/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
