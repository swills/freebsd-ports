# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/www/p5-Apache-DB/Makefile 428143 2016-12-08 17:26:09Z tijl $

PORTNAME=	Apache-DB
PORTVERSION=	0.14
PORTREVISION=	4
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Debugging and profiling tools for mod_perl

RUN_DEPENDS=	${APACHE_PKGNAMEPREFIX}mod_perl2>=0:www/mod_perl2

USES=		perl5
USE_PERL5=	configure
USE_APACHE_RUN=	22+

.include <bsd.port.mk>
