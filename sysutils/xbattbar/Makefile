# Created by: sumikawa
# $FreeBSD: head/sysutils/xbattbar/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	xbattbar
PORTVERSION=	1.4.2
PORTREVISION=	7
CATEGORIES=	sysutils
MASTER_SITES=	http://iplab.aist-nara.ac.jp/member/suguru/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple battery meter

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		imake
USE_XORG=	x11 xext
WRKSRC=		${WRKDIR}/xbattbar-${PORTVERSION}
PLIST_FILES=	bin/xbattbar \
		man/man1/xbattbar.1.gz

.include <bsd.port.mk>
