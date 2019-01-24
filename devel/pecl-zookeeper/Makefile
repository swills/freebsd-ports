# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/pecl-zookeeper/Makefile 491049 2019-01-23 17:34:52Z sunpoet $

PORTNAME=	zookeeper
PORTVERSION=	0.6.3
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PHP extension for interfacing with Apache ZooKeeper

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libzookeeper_mt.so:devel/libzookeeper

USES=		php:pecl
USE_PHP=	session:build

PORTDATA=	zookeeper-api.php

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/zookeeper-api.php ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
