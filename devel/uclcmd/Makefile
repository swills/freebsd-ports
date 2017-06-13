# $FreeBSD: head/devel/uclcmd/Makefile 430235 2017-01-01 03:45:12Z sunpoet $

PORTNAME=	uclcmd
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	allanjude@FreeBSD.org
COMMENT=	Command line tool for working with UCL config files

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libucl.so:textproc/libucl

USE_GITHUB=	yes
GH_ACCOUNT=	allanjude
GH_TAGNAME=	9450b2d

USES=		pkgconfig
PLIST_FILES=	bin/uclcmd

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
