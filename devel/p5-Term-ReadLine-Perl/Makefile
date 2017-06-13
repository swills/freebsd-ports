# Created by: Anes Mukhametov <anes@anes.su>
# $FreeBSD: head/devel/p5-Term-ReadLine-Perl/Makefile 417207 2016-06-21 13:24:53Z mat $

PORTNAME=	Term-ReadLine-Perl
PORTVERSION=	1.0303
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Quick implementation of the minimal interface to Readline libraries

BUILD_DEPENDS=	p5-Term-ReadKey>=0:devel/p5-Term-ReadKey
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
