# Created by: Cheng-Lung Sung
# $FreeBSD: head/devel/p5-POE-Component-RSSAggregator/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	POE-Component-RSSAggregator
PORTVERSION=	1.11
PORTREVISION=	1
CATEGORIES=	devel perl5 textproc
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Watch Muliple RSS Feeds for New Headlines

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE-Component-Client-DNS>=0.98:dns/p5-POE-Component-Client-DNS \
		p5-POE-Component-Client-HTTP>=0.51:www/p5-POE-Component-Client-HTTP \
		p5-XML-RSS-Feed>=0:textproc/p5-XML-RSS-Feed \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
