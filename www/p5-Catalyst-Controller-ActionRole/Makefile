# Created by: mons
# $FreeBSD: head/www/p5-Catalyst-Controller-ActionRole/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Catalyst-Controller-ActionRole
PORTVERSION=	0.15
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mons@cpan.org
COMMENT=	Apply roles to action instances

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.71001:www/p5-Catalyst-Runtime \
		p5-Moose>=2:devel/p5-Moose \
		p5-MooseX-Types>=0:devel/p5-MooseX-Types \
		p5-String-RewritePrefix>=0.004:textproc/p5-String-RewritePrefix \
		p5-namespace-clean>=0:devel/p5-namespace-clean

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
