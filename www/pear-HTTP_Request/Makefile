# Created by: Thierry Thomas (<thierry@FreeBSD.org>)
# $FreeBSD: head/www/pear-HTTP_Request/Makefile 443345 2017-06-11 07:46:54Z sunpoet $

PORTNAME=	HTTP_Request
PORTVERSION=	1.4.4
CATEGORIES=	www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR classes providing an easy way to perform HTTP requests

BUILD_DEPENDS=	${PEARDIR}/Net/URL.php:net/pear-Net_URL		\
		${PEARDIR}/Net/Socket.php:net/pear-Net_Socket
RUN_DEPENDS=	${PEARDIR}/Net/URL.php:net/pear-Net_URL		\
		${PEARDIR}/Net/Socket.php:net/pear-Net_Socket

USES=		pear

.include <bsd.port.mk>
