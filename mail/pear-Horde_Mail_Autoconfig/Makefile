# $FreeBSD: head/mail/pear-Horde_Mail_Autoconfig/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Horde_Mail_Autoconfig
PORTVERSION=	1.0.3
CATEGORIES=	mail www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Mail Autoconfiguration

USES=	horde
USE_HORDE_RUN=	Horde_Exception \
		Horde_Http \
		Horde_Imap_Client \
		Horde_Mail \
		Horde_Smtp

RUN_DEPENDS+=	${PEARDIR}/Net/DNS2.php:dns/pear-Net_DNS2@${PHP_FLAVOR}

.include <bsd.port.mk>
