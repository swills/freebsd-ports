# Created by: chinsan
# $FreeBSD: head/www/p5-WebService-Rakuten/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	WebService-Rakuten
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Rakuten WebService API

BUILD_DEPENDS=	ja-p5-Unicode-Japanese>=0:japanese/p5-Unicode-Japanese \
		p5-JSON>=0:converters/p5-JSON \
		p5-Readonly>=0:devel/p5-Readonly \
		p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}
BUILD_DEPENDS+=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
