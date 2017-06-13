# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/www/p5-CGI-Cookie-XS/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	CGI-Cookie-XS
PORTVERSION=	0.18
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:AGENT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	HTTP Cookie parser in C

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Filter-Simple>=0:textproc/p5-Filter-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
