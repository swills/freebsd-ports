# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/net/pear-Net_Dict/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Net_Dict
PORTVERSION=	1.0.7
CATEGORIES=	net www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR interface to the DICT protocol

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket@${PHP_FLAVOR} \
		${PEARDIR}/Cache.php:sysutils/pear-Cache@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket@${PHP_FLAVOR} \
		${PEARDIR}/Cache.php:sysutils/pear-Cache@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
