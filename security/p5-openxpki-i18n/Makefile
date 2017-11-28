# Created by: Sergei Vyshenski <svysh.fbsd@gmail.com>
# $FreeBSD: head/security/p5-openxpki-i18n/Makefile 454921 2017-11-26 20:53:15Z dbaio $

PORTNAME=	openxpki
PORTVERSION=	1.19.4
DISTVERSIONPREFIX=	v
CATEGORIES=	security perl5
PKGNAMEPREFIX=	p5-
PKGNAMESUFFIX=	-i18n

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Perl based trustcenter software for PKI: i18n tools

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/../../LICENSE

USE_GITHUB=	yes

### We can not go without_NLS. Internationalization is needed even for English
USES=		gettext-runtime gettext-tools gmake perl5
ALL_TARGET=	scan default
WRKSRC_SUBDIR=	core/i18n

.include <bsd.port.mk>
