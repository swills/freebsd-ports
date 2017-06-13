# Created by: clsung
# $FreeBSD: head/textproc/p5-Tree-Suffix/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Tree-Suffix
PORTVERSION=	0.22
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the libstree library

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Devel-CheckLib>=0:devel/p5-Devel-CheckLib
LIB_DEPENDS=	libstree.so:textproc/libstree

USES=		perl5
USE_PERL5=	configure
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
