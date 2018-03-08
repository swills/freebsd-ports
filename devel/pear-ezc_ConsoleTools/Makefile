# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-ezc_ConsoleTools/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	ConsoleTools
PORTVERSION=	1.6.1
CATEGORIES=	devel pear
MASTER_SITES=	http://components.ez.no/get/
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}${PEAR_CHANNEL}_

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Set of classes to do different actions with the console

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PEAR_PKGNAMEPREFIX}ezc_Base>=1.8:devel/pear-ezc_Base@${PHP_FLAVOR}
RUN_DEPENDS=	${PEAR_PKGNAMEPREFIX}ezc_Base>=1.8:devel/pear-ezc_Base@${PHP_FLAVOR}

PEAR_CHANNEL=	ezc
USES=	pear

.include <bsd.port.mk>
