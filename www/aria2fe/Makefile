# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/www/aria2fe/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	aria2fe
DISTVERSION=	0.0.5
PORTREVISION=	6
CATEGORIES=	www
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Aria2 Qt front-end

LICENSE=	GPLv3+

RUN_DEPENDS=	aria2c:www/aria2 \
		xterm:x11/xterm

USES=		tar:bzip2 qmake
USE_QT4=	gui moc_build rcc_build uic_build

PLIST_FILES=	bin/${PORTNAME}

CONFIGURE_WRKSRC=	${WRKSRC}/src
BUILD_WRKSRC=	${CONFIGURE_WRKSRC}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
