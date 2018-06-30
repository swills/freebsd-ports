# Created by: Hans Petter Selasky <hselasky@FreeBSD.org>
# $FreeBSD: head/audio/virtual_oss_ctl/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	virtual_oss_ctl
PORTVERSION=	1.1.0
CATEGORIES=	audio
MASTER_SITES=	http://www.selasky.org/hans_petter/distfiles/ \
		http://home.selasky.org:8192/distfiles/

MAINTAINER=	hselasky@FreeBSD.org
COMMENT=	Grapical control panel for the virtual OSS daemon

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	virtual_oss:audio/virtual_oss

USES=		qmake qt:4 tar:bzip2
USE_QT=		corelib gui qmake_build moc_build rcc_build

.include <bsd.port.mk>
