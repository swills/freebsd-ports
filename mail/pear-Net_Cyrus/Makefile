# Created by: Attila Nagy <bra@fsn.hu>
# $FreeBSD: head/mail/pear-Net_Cyrus/Makefile 443268 2017-06-11 07:40:30Z sunpoet $

PORTNAME=	Net_Cyrus
PORTVERSION=	0.3.1
CATEGORIES=	mail net pear

MAINTAINER=	bra@fsn.hu
COMMENT=	PEAR class to administer Cyrus IMAP servers

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket \
		${PEARDIR}/Net/IMAP.php:mail/pear-Net_IMAP
RUN_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket \
		${PEARDIR}/Net/IMAP.php:mail/pear-Net_IMAP

USES=		pear

.include <bsd.port.mk>
