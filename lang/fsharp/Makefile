# Created by: Phillip Neumann <pneumann@gmail.com>
# $FreeBSD: head/lang/fsharp/Makefile 473640 2018-06-30 20:21:52Z dbn $

PORTNAME=	fsharp
PORTVERSION=	10.0.2
CATEGORIES=	lang
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Functional and object-oriented language for the .NET platform

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	msbuild:devel/msbuild
TEST_DEPENDS=	libgdiplus>=0:x11-toolkits/libgdiplus

USE_GITHUB=	yes

USES=		gmake mono:nuget pkgconfig
MAKE_JOBS_UNSAFE=	Build not parallelizable
NUGET_LAYOUT=	legacy
NO_ARCH=	yes

do-test:
	${MKDIR} ${WRKDIR}/bin
	echo "#!/bin/sh" > ${WRKDIR}/bin/fsharpc
	echo 'exec ${LOCALBASE}/bin/mono ${WRKSRC}/Release/net40/bin/fsc.exe "$$@"' >> ${WRKDIR}/bin/fsharpc
	${CHMOD} 0755 ${WRKDIR}/bin/fsharpc
	(cd ${WRKSRC}/tests/fsharp/core; \
		${ENV} \
			PATH=${WRKDIR}/bin:${PATH} \
			MONO_PATH=${WRKSRC}/Release/net40/bin \
			./run-all.sh)

.include <bsd.port.mk>
