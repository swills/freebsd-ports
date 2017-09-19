# Created by: Clement Laforet <sheepkiller@cultdeadsheep.org>
# $FreeBSD: head/net/pear-Net_NNTP/Makefile 450050 2017-09-18 16:18:55Z joneum $

PORTNAME=	Net_NNTP
PORTVERSION=	1.5.2
PORTEPOCH=	1
CATEGORIES=	net news pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR implementation of the NNTP protocol

LICENSE=	W3C
LICENSE_NAME=	W3C IPR SOFTWARE NOTICE
LICENSE_FILE=	${WRKSRC}/LICENSE.md
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket
RUN_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket

NO_ARCH=	yes

USES=		pear

.include <bsd.port.mk>
