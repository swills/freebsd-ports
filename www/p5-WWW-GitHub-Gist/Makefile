# Created by: Denny Lin <dennylin93@hs.ntnu.edu.tw>
# $FreeBSD: head/www/p5-WWW-GitHub-Gist/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	WWW-GitHub-Gist
PORTVERSION=	0.17
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to Gist

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-JSON>=0:converters/p5-JSON \
		p5-Moo>=0:devel/p5-Moo
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
