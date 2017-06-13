# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/www/p5-WebService-Redmine/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	WebService-Redmine
PORTVERSION=	0.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to Redmine

RUN_DEPENDS=	p5-libwww>0:www/p5-libwww \
		p5-JSON-XS>0:converters/p5-JSON-XS
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
