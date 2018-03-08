# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: head/mail/pear-Mail/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Mail
DISTVERSION=	1.4.1
PORTEPOCH=	1
CATEGORIES=	mail www pear

MAINTAINER=	garga@FreeBSD.org
COMMENT=	PEAR class that provides multiple interfaces for sending emails

LICENSE=	BSD3CLAUSE

OPTIONS_DEFINE=	PEAR_NET_SMTP
PEAR_NET_SMTP_DESC=	PEAR::Net_SMTP support

USES=	pear

PEAR_NET_SMTP_RUN_DEPENDS=	${PEARDIR}/Net/SMTP.php:net/pear-Net_SMTP@${PHP_FLAVOR}

.include <bsd.port.mk>
