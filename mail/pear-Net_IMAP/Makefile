# Created by: Attila Nagy <bra@fsn.hu>
# $FreeBSD: head/mail/pear-Net_IMAP/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Net_IMAP
PORTVERSION=	1.1.3
CATEGORIES=	mail net pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR class that provides an implementation of the IMAP protocol

LICENSE=	PHP301

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket@${PHP_FLAVOR} \
		${PEARDIR}/Auth/SASL.php:security/pear-Auth_SASL@${PHP_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		pear

.include <bsd.port.mk>
