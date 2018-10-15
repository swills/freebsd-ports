# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/lang/p5-Perl6-Subs/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Perl6-Subs
PORTVERSION=	0.05
PORTREVISION=	2
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl6::Subs - Define your subroutines in the Perl 6 style

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Parse-RecDescent>=0:devel/p5-Parse-RecDescent

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
