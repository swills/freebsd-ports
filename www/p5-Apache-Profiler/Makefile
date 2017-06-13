# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/www/p5-Apache-Profiler/Makefile 428143 2016-12-08 17:26:09Z tijl $

PORTNAME=	Apache-Profiler
PORTVERSION=	0.10
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Profiles time seconds needed for every request

BUILD_DEPENDS=	mp2bug:www/mod_perl2
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
