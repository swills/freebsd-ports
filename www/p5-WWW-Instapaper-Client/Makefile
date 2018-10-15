# Created by: TERAMOTO Masahiro <markun@onohara.to>
# $FreeBSD: head/www/p5-WWW-Instapaper-Client/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	WWW-Instapaper-Client
PORTVERSION=	0.901
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Implementation of the Instapaper client API

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Base>=0:devel/p5-Class-Base \
		p5-Crypt-SSLeay>=0:security/p5-Crypt-SSLeay \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
