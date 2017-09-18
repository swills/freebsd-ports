# Created by: Nobutaka Mantani <nobutaka@FreeBSD.org>
# $FreeBSD: head/devel/p5-Mac-PropertyList/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Mac-PropertyList
PORTVERSION=	1.41
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	Perl extension for parsing Mac OS X property lists

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-XML-Entities>=0:textproc/p5-XML-Entities
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
