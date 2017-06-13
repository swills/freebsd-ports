# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/p5-Metabase-Client-Simple/Makefile 412844 2016-04-09 14:15:31Z swills $

PORTNAME=	Metabase-Client-Simple
PORTVERSION=	0.012
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DAGOLDEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Client that submits to Metabase servers

BUILD_DEPENDS=	p5-JSON>=0:converters/p5-JSON \
		p5-libwww>=0:www/p5-libwww \
		p5-Metabase-Fact>0:devel/p5-Metabase-Fact
RUN_DEPENDS=	p5-JSON>=0:converters/p5-JSON \
		p5-libwww>=0:www/p5-libwww \
		p5-Metabase-Fact>0:devel/p5-Metabase-Fact \
		p5-Crypt-SSLeay>0:security/p5-Crypt-SSLeay

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
