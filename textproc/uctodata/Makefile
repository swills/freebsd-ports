# $FreeBSD: head/textproc/uctodata/Makefile 486909 2018-12-08 04:26:45Z yuri $

PORTNAME=	uctodata
DISTVERSIONPREFIX=	v
DISTVERSION=	0.8
CATEGORIES=	textproc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Datafiles for the tokenizer 'ucto'

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf gmake
GNU_CONFIGURE=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	LanguageMachines

NO_ARCH=	yes

DATADIR=	${PREFIX}/share/ucto

.include <bsd.port.mk>
