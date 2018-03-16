# $FreeBSD: head/science/fvcom-mpi/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTREVISION=	11
PKGNAMESUFFIX=	-openmpi

MPIPREFIX=	mpi/openmpi/

MAINTAINER=	jwb@FreeBSD.org

LIB_DEPENDS+=	libmpi.so:net/openmpi

MASTERDIR=	${.CURDIR}/../fvcom

MAKE_ARGS+=	FC=${LOCALBASE}/${MPIPREFIX}bin/mpif90 \
		PORT_CPP_FLAGS+=-DMULTIPROCESSOR

.include "${MASTERDIR}/Makefile"
