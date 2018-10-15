# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/www/p5-Catalyst-Model-DBIC-Plain/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Catalyst-Model-DBIC-Plain
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SRI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBIx::Class model class for Catalyst, without loader

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime \
		p5-Catalyst-Devel>=1.00:www/p5-Catalyst-Devel \
		p5-DBIx-Class>=0.01:databases/p5-DBIx-Class

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
