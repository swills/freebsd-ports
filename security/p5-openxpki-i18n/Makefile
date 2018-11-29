# Created by: Sergei Vyshenski <svysh.fbsd@gmail.com>
# $FreeBSD: head/security/p5-openxpki-i18n/Makefile 486037 2018-11-27 17:10:12Z sunpoet $

PORTNAME=	openxpki
PORTVERSION=	2.2.3
DISTVERSIONPREFIX=	v
CATEGORIES=	security perl5
PKGNAMEPREFIX=	p5-
PKGNAMESUFFIX=	-i18n

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Perl based trustcenter software for PKI: i18n tools

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/../../LICENSE

### We can not go without NLS. Internationalization is needed even for English
USES=		gettext-runtime gettext-tools gmake perl5

USE_GITHUB=	yes

ALL_TARGET=	scan default
NO_ARCH=	yes
WRKSRC_SUBDIR=	core/i18n

.include <bsd.port.mk>
