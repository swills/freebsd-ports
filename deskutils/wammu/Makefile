# Created by: bsam
# $FreeBSD: head/deskutils/wammu/Makefile 460249 2018-01-29 09:25:22Z vanilla $

PORTNAME=	wammu
PORTVERSION=	0.44
CATEGORIES=	deskutils
MASTER_SITES=	http://dl.cihar.com/wammu/v0/ \
		http://dl.cihar.com.nyud.net/wammu/v0/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GUI manager of contacts, todos, calendar, and messages in your phone

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libGammu.so:comms/gammu

USES=		gettext pkgconfig python:2.7 tar:bz2
USE_PYTHON=	distutils autoplist
USE_WX=		3.0+
WX_COMPS=	python:lib
NO_ARCH=	yes

.include <bsd.port.mk>
