# Created by: Aaron Dalton <aaron@daltons.ca>
# $FreeBSD: head/devel/p5-Heap-Simple-Perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Heap-Simple-Perl
PORTVERSION=	0.14
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Pure perl implementation of the Heap::Simple interface

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Heap-Simple>=0:devel/p5-Heap-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	-n

.include <bsd.port.mk>
