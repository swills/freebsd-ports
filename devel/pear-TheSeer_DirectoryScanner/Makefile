# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-TheSeer_DirectoryScanner/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	DirectoryScanner
PORTVERSION=	1.2.0
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.netpirates.net/get/
PKGNAMEPREFIX=	pear-TheSeer_

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Recursive directory scanner and filter

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.netpirates.net.reg:devel/pear-channel-theseer
RUN_DEPENDS=	${PEARDIR}/.channels/pear.netpirates.net.reg:devel/pear-channel-theseer

USE_PHP=	fileinfo
PEAR_CHANNEL=	theseer
USES=	pear

.include <bsd.port.mk>
