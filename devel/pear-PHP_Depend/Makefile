# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-PHP_Depend/Makefile 454852 2017-11-24 22:00:39Z joneum $

PORTNAME=	PHP_Depend
PORTVERSION=	1.1.2
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.pdepend.org/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHP_Depend design quality metrics for PHP packages

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.pdepend.org.reg:devel/pear-channel-pdepend
RUN_DEPENDS=	${PEARDIR}/.channels/pear.pdepend.org.reg:devel/pear-channel-pdepend

USES=	pear
PEAR_CHANNEL=	pdepend
USE_PHP=	dom tokenizer simplexml

.include <bsd.port.mk>
