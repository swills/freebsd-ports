# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/www/p5-Catalyst-Plugin-Authentication-CDBI/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Catalyst-Plugin-Authentication-CDBI
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MRAMBERG
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	CDBI Authentication for Catalyst

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=0:www/p5-Catalyst-Runtime \
		p5-Catalyst-Model-CDBI>=0:www/p5-Catalyst-Model-CDBI \
		p5-Catalyst-Plugin-Session-FastMmap>=0:www/p5-Catalyst-Plugin-Session-FastMmap

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
