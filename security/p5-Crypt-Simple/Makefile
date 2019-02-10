# Created by: Alexander Kriventsov <avk@vl.ru>
# $FreeBSD: head/security/p5-Crypt-Simple/Makefile 492561 2019-02-10 00:07:32Z sunpoet $

PORTNAME=	Crypt-Simple
PORTVERSION=	0.06
PORTREVISION=	4
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	avk@vl.ru
COMMENT=	Perl encrypt stuff simply

LICENSE=	GPLv2+

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-Blowfish>=0:security/p5-Crypt-Blowfish \
		p5-FreezeThaw>=0:devel/p5-FreezeThaw

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
