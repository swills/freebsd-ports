# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/textproc/p5-RADIUS-UserFile/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	RADIUS-UserFile
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl extension for manipulating a RADIUS users file

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Tie-IxHash>=0:devel/p5-Tie-IxHash
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
