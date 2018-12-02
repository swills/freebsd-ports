# Created by: Hans Petter Selasky <hselasky@FreeBSD.org>
# $FreeBSD: head/audio/virtual_oss_ctl/Makefile 486467 2018-12-02 15:41:47Z rene $

PORTNAME=	virtual_oss_ctl
PORTVERSION=	1.1.0
CATEGORIES=	audio
MASTER_SITES=	http://www.selasky.org/hans_petter/distfiles/ \
		http://home.selasky.org:8192/distfiles/

MAINTAINER=	hselasky@FreeBSD.org
COMMENT=	Grapical control panel for the virtual OSS daemon

LICENSE=	BSD2CLAUSE

DEPRECATED=		Qt4 has been EOL since december 2015
EXPIRATION_DATE=	2019-03-15

RUN_DEPENDS=	virtual_oss:audio/virtual_oss

USES=		qmake qt:4 tar:bzip2
USE_QT=		corelib gui qmake_build moc_build rcc_build

.include <bsd.port.mk>
