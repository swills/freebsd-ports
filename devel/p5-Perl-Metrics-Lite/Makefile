# $FreeBSD: head/devel/p5-Perl-Metrics-Lite/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Perl-Metrics-Lite
PORTVERSION=	0.080
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0$//}

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for pluggable Perl Code Metrics System

RUN_DEPENDS=	\
	p5-PPI>=1.205:textproc/p5-PPI \
	p5-Readonly>=1.03:devel/p5-Readonly \
	p5-Text-ASCIITable>0:textproc/p5-Text-ASCIITable
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
