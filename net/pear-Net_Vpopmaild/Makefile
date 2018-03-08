# Created by: Wen heping <wenheping@gmail.com>)
# $FreeBSD: head/net/pear-Net_Vpopmaild/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Net_Vpopmaild
PORTVERSION=	0.3.2
CATEGORIES=	net mail pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR Class for accessing Vpopmail's vpopmaild daemon

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket@${PHP_FLAVOR} \
		${PEARDIR}/Log.php:sysutils/pear-Log@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket@${PHP_FLAVOR} \
		${PEARDIR}/Log.php:sysutils/pear-Log@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
