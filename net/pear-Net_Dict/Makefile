# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/net/pear-Net_Dict/Makefile 443280 2017-06-11 07:41:27Z sunpoet $

PORTNAME=	Net_Dict
PORTVERSION=	1.0.7
CATEGORIES=	net www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR interface to the DICT protocol

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket \
		${PEARDIR}/Cache.php:sysutils/pear-Cache
RUN_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket \
		${PEARDIR}/Cache.php:sysutils/pear-Cache

USES=		pear

.include <bsd.port.mk>
