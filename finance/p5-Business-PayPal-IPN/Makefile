# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: head/finance/p5-Business-PayPal-IPN/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Business-PayPal-IPN
PORTVERSION=	1.94
PORTREVISION=	1
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	coryking@mozimedia.com
COMMENT=	Perl extension that implements PayPal IPN v1.5

BUILD_DEPENDS=	p5-Crypt-SSLeay>=0.56:security/p5-Crypt-SSLeay \
		p5-libwww>=5.805:www/p5-libwww
RUN_DEPENDS=	p5-Crypt-SSLeay>=0.56:security/p5-Crypt-SSLeay \
		p5-libwww>=5.805:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
