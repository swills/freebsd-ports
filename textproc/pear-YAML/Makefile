# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/textproc/pear-YAML/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	YAML
PORTVERSION=	1.0.6
CATEGORIES=	textproc www pear
MASTER_SITES=	http://pear.symfony-project.com/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	The Symfony YAML Component

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.symfony-project.com.reg:devel/pear-channel-symfony
RUN_DEPENDS=	${PEARDIR}/.channels/pear.symfony-project.com.reg:devel/pear-channel-symfony

USES=	pear
PEAR_CHANNEL=	symfony

.include <bsd.port.mk>
